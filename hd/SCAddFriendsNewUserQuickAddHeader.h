//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel;

@interface SCAddFriendsNewUserQuickAddHeader : UIView
{
    NSString *_text;
    UIView *_seperationLine;
    UILabel *_textLabel;
}

@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIView *seperationLine; // @synthesize seperationLine=_seperationLine;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (double)_textLabelWidth;
- (void)setupLine;
- (void)setupLabelWithText:(id)arg1 font:(id)arg2 textColor:(id)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 text:(id)arg2 font:(id)arg3 textColor:(id)arg4 backgroundColor:(id)arg5;

@end

