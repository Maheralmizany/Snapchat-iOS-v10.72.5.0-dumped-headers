//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSNumber, NSString, SOJUCommerceCustomImageFrame;

@protocol SOJUCommerceCustomImageInfo <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *customImageRotationAngle;
@property(readonly, copy, nonatomic) SOJUCommerceCustomImageFrame *customImageFrame;
@property(readonly, copy, nonatomic) NSNumber *productImageWidth;
@property(readonly, copy, nonatomic) NSNumber *productImageHeight;
@property(readonly, copy, nonatomic) NSString *externalImageId;
@end

