//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Friend, NSArray, NSAttributedString, NSString, SCProfilePictureRenderStyle, SCReplyParameters, SCUserSession, UIColor, UIViewController;

@interface SCFriendProfileCellConfiguration : NSObject
{
    _Bool _shouldUseNewIconsForActionButtons;
    _Bool _isBlocked;
    _Bool _textViewV2;
    _Bool _hasXButton;
    _Bool _hasScrollBar;
    _Bool _showOfficialBadge;
    Friend *_aFriend;
    SCUserSession *_userSession;
    UIViewController *_parentViewController;
    NSArray *_buttons;
    long long _actionButtonStyle;
    NSArray *_contexts;
    SCReplyParameters *_replyParameters;
    SCProfilePictureRenderStyle *_pictureRenderStyle;
    long long _textViewStyle;
    long long _addButtonState;
    long long _addButtonStyle;
    long long _addButtonTitle;
    NSString *_mainLabel;
    NSAttributedString *_attributedSubLabel;
    NSString *_thirdLabel;
    UIColor *_backgroundColor;
    id <SCFriendActionButtonDelegate> _friendActionButtonDelegate;
    id <SCStartChatDelegate> _startChatDelegate;
    id <SCShareUsernameControllerDelegate> _shareUsernameControllerDelegate;
}

@property(nonatomic) __weak id <SCShareUsernameControllerDelegate> shareUsernameControllerDelegate; // @synthesize shareUsernameControllerDelegate=_shareUsernameControllerDelegate;
@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;
@property(nonatomic) __weak id <SCFriendActionButtonDelegate> friendActionButtonDelegate; // @synthesize friendActionButtonDelegate=_friendActionButtonDelegate;
@property(readonly, nonatomic) _Bool showOfficialBadge; // @synthesize showOfficialBadge=_showOfficialBadge;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSString *thirdLabel; // @synthesize thirdLabel=_thirdLabel;
@property(retain, nonatomic) NSAttributedString *attributedSubLabel; // @synthesize attributedSubLabel=_attributedSubLabel;
@property(readonly, copy, nonatomic) NSString *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(nonatomic) long long addButtonTitle; // @synthesize addButtonTitle=_addButtonTitle;
@property(nonatomic) long long addButtonStyle; // @synthesize addButtonStyle=_addButtonStyle;
@property(nonatomic) long long addButtonState; // @synthesize addButtonState=_addButtonState;
@property(nonatomic) long long textViewStyle; // @synthesize textViewStyle=_textViewStyle;
@property(retain, nonatomic) SCProfilePictureRenderStyle *pictureRenderStyle; // @synthesize pictureRenderStyle=_pictureRenderStyle;
@property(nonatomic) _Bool hasScrollBar; // @synthesize hasScrollBar=_hasScrollBar;
@property(nonatomic) _Bool hasXButton; // @synthesize hasXButton=_hasXButton;
@property(nonatomic) _Bool textViewV2; // @synthesize textViewV2=_textViewV2;
@property(readonly, nonatomic) _Bool isBlocked; // @synthesize isBlocked=_isBlocked;
@property(retain, nonatomic) SCReplyParameters *replyParameters; // @synthesize replyParameters=_replyParameters;
@property(retain, nonatomic) NSArray *contexts; // @synthesize contexts=_contexts;
@property(nonatomic) _Bool shouldUseNewIconsForActionButtons; // @synthesize shouldUseNewIconsForActionButtons=_shouldUseNewIconsForActionButtons;
@property(nonatomic) long long actionButtonStyle; // @synthesize actionButtonStyle=_actionButtonStyle;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) Friend *aFriend; // @synthesize aFriend=_aFriend;
- (void).cxx_destruct;
- (id)friendActionButtonsGroupConfiguration;
- (id)initWithFriend:(id)arg1 userSession:(id)arg2 isBlocked:(_Bool)arg3;
- (id)initWithFriend:(id)arg1 userSession:(id)arg2;

@end

