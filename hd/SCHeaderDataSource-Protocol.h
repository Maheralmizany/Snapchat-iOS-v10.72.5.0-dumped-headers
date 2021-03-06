//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSString, SCHeader, SCHeaderAccessoryView, UIColor, UIFont, UIImage;

@protocol SCHeaderDataSource <NSObject>
- (UIImage *)imageForRightButtonInState:(unsigned long long)arg1;
- (UIImage *)imageForLeftButtonInState:(unsigned long long)arg1;
- (UIColor *)textColorForHeader:(SCHeader *)arg1;
- (NSString *)titleForHeader:(SCHeader *)arg1;
- (UIColor *)backgroundColorForHeader;

@optional
- (double)additionalXOffsetForRightButton;
- (double)headerContentViewAdditionalHorizontalPadding;
- (double)additionalXOffsetForHeader;
- (long long)maxLengthForHeaderTextField:(SCHeader *)arg1;
- (UIImage *)imageForXButtonInState:(unsigned long long)arg1;
- (_Bool)shouldEnableXButtonForTextField:(SCHeader *)arg1;
- (UIColor *)tintColorForHeader:(SCHeader *)arg1;
- (long long)returnKeyTypeForHeaderTextField:(SCHeader *)arg1;
- (_Bool)shouldEnableTextField:(SCHeader *)arg1;
- (NSAttributedString *)placeholderAttributedString:(SCHeader *)arg1;
- (NSString *)titleForTextFieldHeader:(SCHeader *)arg1;
- (UIColor *)textColorForPlaceholderInHeader:(SCHeader *)arg1;
- (NSString *)placeHolderForHeaderTextField;
- (_Bool)shouldShowHeaderLabel:(SCHeader *)arg1;
- (SCHeaderAccessoryView *)viewForTitleInHeader:(SCHeader *)arg1;
- (UIFont *)fontForHeader:(SCHeader *)arg1;
@end

