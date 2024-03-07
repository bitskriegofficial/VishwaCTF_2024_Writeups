import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.spec.SecretKeySpec;
import java.util.Base64;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class solve {

    public static void main(String[] args) throws Exception {
        String keyString = "TeBgadEdaeteMtIt";
        byte[] keyData = keyString.getBytes();
        SecretKey secretKey = new SecretKeySpec(keyData, "Blowfish");;
        String encryptedText = "mF1b8dUwdPVhc/0Hfu1ONep6V6oTHnRqhEMEgtCsge+GncFq9YbX1eCkYwmrHTvajsiyj/vd4IV0BbZI1Obq3/uD7nDyAJ/FxZJNAFRAUuGm3LLXf4vn3zKWsZATypBkkgEQLWfIpg0tP13wJRhk6JUVPi17AaKHrodTtWOq54FqKIaT1DoifMjtJ4TCG3IXmjEo+6ZsBokIjxeCjamGBwNAqFaqIikkHJo7L1PiCFds/lAaB38KqHGL/E2pfw0CK3XYzKV8gBdwhnrUq1UN1Q==";

        String decryptedText = decrypt(encryptedText, secretKey);
        System.out.println("Decrypted Text: " + decryptedText);
    }

    private static String decrypt(String encryptedText, SecretKey secretKey) throws Exception {
        Cipher cipher = Cipher.getInstance("Blowfish");
        cipher.init(Cipher.DECRYPT_MODE, secretKey);
        byte[] encryptedBytes = Base64.getDecoder().decode(encryptedText);
        byte[] decryptedBytes = cipher.doFinal(encryptedBytes);

        cipher.init(Cipher.DECRYPT_MODE, secretKey);
        decryptedBytes = cipher.doFinal(decryptedBytes);

        return new String(decryptedBytes);
    }
}