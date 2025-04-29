package core.Module1;

import java.util.HashMap;
import java.util.Map;

public class P041HashMap {
			public static void main(String[] args) {
				Map map = new HashMap();
				map.put(1, "c");//entry
				map.put(2, "c++");
				map.put("java", "java");
				map.put(4, "python");
				map.put(345.34, false);
				System.out.println(map);
			}

}
