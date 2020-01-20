//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, UIImage;

@interface SCMapPinDescriptor : NSObject <NSCopying>
{
    UIImage *_image;
    NSString *_imageIdentifier;
    double _widthPoints;
    double _tipPercentageFromBottom;
}

+ (id)defaultPinDescriptor;
@property(readonly, nonatomic) double tipPercentageFromBottom; // @synthesize tipPercentageFromBottom=_tipPercentageFromBottom;
@property(readonly, nonatomic) double widthPoints; // @synthesize widthPoints=_widthPoints;
@property(readonly, nonatomic) NSString *imageIdentifier; // @synthesize imageIdentifier=_imageIdentifier;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImage:(id)arg1 imageIdentifier:(id)arg2 widthPoints:(double)arg3 tipPercentageFromBottom:(double)arg4;

@end
