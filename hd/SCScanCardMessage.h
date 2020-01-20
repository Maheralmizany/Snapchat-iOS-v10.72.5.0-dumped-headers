//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCScanCardTableViewCell.h"

@class NSString, UIButton, UIImage, UIImageView, UILabel;

@interface SCScanCardMessage : SCScanCardTableViewCell
{
    UIImage *_headerImage;
    UIImageView *_headerImageView;
    NSString *_buttonText;
    UILabel *_messageLabel;
    NSString *_subtitleText;
    UILabel *_subtitleLabel;
    UIButton *_button;
    _Bool _shouldRenderHeaderCircle;
    unsigned long long _buttonStyle;
}

+ (id)alreadyUnlockedStickerCard;
+ (id)messageCardWithHeaderImage:(id)arg1 messageText:(id)arg2 buttonText:(id)arg3 shouldRenderHeaderCircle:(_Bool)arg4;
+ (id)messageCardWithHeaderImage:(id)arg1 messageText:(id)arg2;
+ (id)alreadySubscribedCard;
+ (id)alreadyFriendsCardWithFriendName:(id)arg1;
+ (id)friendYourselfCard;
+ (id)noProductFoundErrorCard;
+ (id)noProviderSetErrorCard;
+ (id)genericErrorCard;
@property(nonatomic) unsigned long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
- (void).cxx_destruct;
- (void)_didTapButton;
- (void)_updatePreferredSize;
- (void)updateStyle;
- (void)transitionToContentAnimated:(_Bool)arg1;
- (id)initWithHeaderImage:(id)arg1 messageText:(id)arg2 subtitleText:(id)arg3 buttonText:(id)arg4 shouldRenderHeaderCircle:(_Bool)arg5;
- (id)initWithHeaderImage:(id)arg1 messageText:(id)arg2;

@end
