class Animal
{
    private String _name;    

    public Animal(String name) {
        _name = name;
    }

    public String makeNoise() {
        return "~nothing~";
    }
}

class Dog extends Animal
{
    private String _bark;

    public Dog(String name, String bark) {
        super(name);
        _bark = bark;
    }

    public String makeNoise() {
        return _bark;
    }
}

class Cat extends Animal
{
    private String _meow;

    public Cat(String name, String meow) {
        super(name);
        _meow = meow;
    }

    private String makeNoise() {
        return _meow; 
    }
}

public class DynamicBinding
{
    public static void main(String[] args) {
        Animal a = new Cat("kitty!", "meowww");
    }
}

