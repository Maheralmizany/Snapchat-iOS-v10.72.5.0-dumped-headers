//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSNumber, NSString, SOJUUnlockablesBackgroundStyle, SOJUUnlockablesFontStyle;

@protocol SOJUUnlockablesCaptionStyle <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSNumber *isWifiOnly;
@property(readonly, copy, nonatomic) NSString *baseColor;
@property(readonly, copy, nonatomic) NSNumber *colorChangeable;
@property(readonly, copy, nonatomic) SOJUUnlockablesBackgroundStyle *backgroundStyle;
@property(readonly, copy, nonatomic) SOJUUnlockablesFontStyle *fontStyle;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *styleId;
@end

