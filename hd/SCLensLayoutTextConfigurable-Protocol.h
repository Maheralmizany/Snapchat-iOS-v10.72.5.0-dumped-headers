//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIColor, UIFont;

@protocol SCLensLayoutTextConfigurable <NSObject>
@property(nonatomic) long long numberOfLines;
@property(nonatomic) long long lineBreakMode;
@property(nonatomic) long long textAlignment;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *font;
- (void)sc_applyStyles:(NSArray *)arg1;
@end

