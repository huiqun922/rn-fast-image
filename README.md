# rn-fast-image

native image with SDWebImage and Glide

Fork with https://github.com/DylanVann/react-native-fast-image

## Installation

```sh
npm install rn-fast-image
```

## Usage

Fork with https://github.com/DylanVann/react-native-fast-image

## Are you using Proguard?
If you use Proguard you will need to add these lines to android/app/proguard-rules.pro:

-keep public class com.rnfastimage.* {*;}
-keep public class com.rnfastimage.** {*;}
-keep public class * implements com.bumptech.glide.module.GlideModule
-keep public class * extends com.bumptech.glide.module.AppGlideModule
-keep public enum com.bumptech.glide.load.ImageHeaderParser$** {
  **[] $VALUES;
  public *;
}

## Contributing

See the [contributing guide](CONTRIBUTING.md) to learn how to contribute to the repository and the development workflow.

## License

MIT

---

Made with [create-react-native-library](https://github.com/callstack/react-native-builder-bob)
