//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SPImage, UIImage;

@protocol SPRecentImagesService <NSObject>
- (void)addRecentItem:(SPImage *)arg1;
- (void)saveImage:(UIImage *)arg1 collectionWithName:(NSString *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
@end

