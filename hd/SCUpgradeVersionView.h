//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UILabel;

@interface SCUpgradeVersionView : UIView
{
    UIButton *_yesButton;
    UILabel *_title;
    NSString *_link;
}

@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIButton *yesButton; // @synthesize yesButton=_yesButton;
- (void).cxx_destruct;
- (void)setButtonText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)upgradeDismissed;
- (void)yesButtonPressed;
- (id)initWithFrame:(struct CGRect)arg1;

@end

