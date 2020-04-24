import org.junit.*;
import org.junit.rules.*;
import org.testng.annotations.AfterMethod;
import org.testng.annotations.BeforeMethod;

public class MathsTest {
    private Maths maths;

    @BeforeMethod
    public void setUp() {
        maths = new Maths();
    }

    @Test
    public void add_TwoPlusTwo_ReturnsFour() {
        // Arrange
        final int expected = 4;

        // Act
        final int actual = Maths.add(2, 2);

        // Assert
        Assert.assertEquals(actual, expected);
    }

    @Test
    public void divide_TenDividedByFive_ReturnsTwo() {
        final double expected = 2;

        final double actual = Maths.divide(10, 5);

        Assert.assertEquals(actual, expected, 0.01);
    }

    @org.testng.annotations.Test(expectedExceptions = IllegalArgumentException.class)
    public void divide_TenDividedByZero_ThrowsIllegalArgumentException() {
        Maths.divide(10, 0);
    }

    @AfterMethod
    public void tearDown() {
        maths = null;
    }
}