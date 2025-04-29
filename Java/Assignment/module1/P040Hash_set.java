package core.Module1;

import java.util.HashSet;
import java.util.Set;

public class P040Hash_set {
		public static void main(String[] args) {
			Set set = new HashSet();
			set.add(1);
			set.add("java");
			set.add("java");
			set.add(11.11);
			System.out.println(set);
		}
}
