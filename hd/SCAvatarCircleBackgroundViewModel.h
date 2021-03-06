//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCNetworkImage, UIColor;

@interface SCAvatarCircleBackgroundViewModel : NSObject <NSCopying>
{
    unsigned long long _subtype;
    UIColor *_solidColor_backgroundColor;
    UIColor *_solidColor_strokeColor;
    double _solidColor_strokeWidth;
    SCNetworkImage *_image_backgroundNetworkImage;
    UIColor *_image_backgroundColor;
}

+ (id)solidColorWithBackgroundColor:(id)arg1 strokeColor:(id)arg2 strokeWidth:(double)arg3;
+ (id)imageWithBackgroundNetworkImage:(id)arg1 backgroundColor:(id)arg2;
- (void).cxx_destruct;
- (void)matchSolidColor:(CDUnknownBlockType)arg1 image:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

