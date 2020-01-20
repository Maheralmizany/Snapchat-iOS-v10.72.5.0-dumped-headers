//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GHImageCache : NSObject
{
}

+ (void)extractFaceImageFromPickedImage:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)saveImage:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (id)uniqueFilenameWithExtension:(id)arg1;
+ (void)saveImageData:(id)arg1 withName:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
+ (id)newUniqueID;
+ (void)aSyncRetrieveCachedImageFromURL:(id)arg1 intoCallback:(CDUnknownBlockType)arg2;
+ (void)retrieveCachedImageFromURL:(id)arg1 intoCallback:(CDUnknownBlockType)arg2;
+ (id)uncacheImageForName:(id)arg1;
+ (void)cacheImage:(id)arg1 forName:(id)arg2;
+ (void)setCachedImage:(id)arg1 forURL:(id)arg2;
+ (id)loadQueue;
+ (id)imageCache;

@end

