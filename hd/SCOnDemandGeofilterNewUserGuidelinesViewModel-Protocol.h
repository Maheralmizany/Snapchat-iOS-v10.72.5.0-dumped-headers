//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSString, UIImage;

@protocol SCOnDemandGeofilterNewUserGuidelinesViewModel <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *continueButtonName;
@property(readonly, copy, nonatomic) NSString *containerImageUrlString;
@property(readonly, copy, nonatomic) NSString *rightImageUrlString;
@property(readonly, copy, nonatomic) NSString *leftImageUrlString;
@property(readonly, copy, nonatomic) NSString *midImageUrlString;
@property(readonly, nonatomic) double midRotate;
@property(readonly, nonatomic) double rightRotate;
@property(readonly, nonatomic) double leftRotate;
@property(readonly, copy, nonatomic) UIImage *imageRight;
@property(readonly, nonatomic) struct CGSize imageViewRightSize;
@property(readonly, nonatomic) struct CGPoint imageViewRightOrigin;
@property(readonly, copy, nonatomic) UIImage *imageMid;
@property(readonly, nonatomic) struct CGSize imageViewMidSize;
@property(readonly, nonatomic) struct CGPoint imageViewMidOrigin;
@property(readonly, copy, nonatomic) UIImage *imageLeft;
@property(readonly, nonatomic) struct CGSize imageViewLeftSize;
@property(readonly, nonatomic) struct CGPoint imageViewLeftOrigin;
@end

