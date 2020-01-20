//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCChatInputExpandItemControllerDelegate.h"
#import "SCChatInputSendItemControllerDelegate.h"
#import "SCChatInputTextViewPasteDelegate.h"
#import "SCPageNameLogging.h"
#import "SCTraceEnabled.h"
#import "UITextViewDelegate.h"

@class NSString, SCChatInputBar, SCChatInputItem, SCChatInputItemDrawerCoordinator, SCChatInputTextView, SCChatInputTextViewListenerAnnouncer, SCChatInputView, UIView;

@interface SCChatInputViewController : UIViewController <SCTraceEnabled, UITextViewDelegate, SCChatInputSendItemControllerDelegate, SCChatInputTextViewPasteDelegate, SCChatInputExpandItemControllerDelegate, SCPageNameLogging>
{
    SCChatInputTextViewListenerAnnouncer *_announcer;
    SCChatInputView *_inputView;
    _Bool _shouldReenableKeyboard;
    SCChatInputItem *_expandItem;
    id <SCChatInputViewControllerDelegate> _delegate;
    unsigned long long _style;
    id <SCChatInputViewControllerLogging> _logger;
    SCChatInputItemDrawerCoordinator *_coordinator;
}

@property(retain, nonatomic) SCChatInputItemDrawerCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain, nonatomic) id <SCChatInputViewControllerLogging> logger; // @synthesize logger=_logger;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <SCChatInputViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)_returnKeyPressed:(id)arg1;
- (void)expendItemDidPressExpand:(id)arg1;
- (void)sendItemControllerDidPressSend:(id)arg1;
- (void)inputTextView:(id)arg1 didPasteVideo:(id)arg2 contentType:(id)arg3;
- (void)inputTextView:(id)arg1 didPasteMemoji:(id)arg2;
- (void)inputTextView:(id)arg1 didPasteImage:(id)arg2;
- (void)inputTextView:(id)arg1 didPasteGif:(id)arg2;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)removeStateListener:(id)arg1;
- (void)addStateListener:(id)arg1;
- (void)removeTextViewListener:(id)arg1;
- (void)addTextViewListener:(id)arg1;
- (long long)drawerMode;
- (void)selectItemWithDeeplinkIdentifier:(id)arg1;
- (void)restoreAttributedString:(id)arg1;
- (void)unregisterPanGesture:(id)arg1;
- (void)registerPanGesture:(id)arg1;
- (void)transitionDrawerToState:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)disableKeyboardIfNecessary;
- (void)disableKeyboard;
- (_Bool)_shouldDisableKeyboard;
- (void)enableKeyboardIfNecessary;
- (void)enableKeyboard;
- (_Bool)_shouldEnableKeyboard;
- (void)removeFeature:(id)arg1;
- (void)_addFeature:(id)arg1;
- (void)insertFeature:(id)arg1 atIndex:(unsigned long long)arg2 position:(unsigned long long)arg3;
- (void)addFeature:(id)arg1 atPosition:(unsigned long long)arg2;
- (double)drawerHeightForState:(unsigned long long)arg1;
@property(nonatomic) _Bool inputViewTransparent;
@property(nonatomic) _Bool ignoresSafeAreaLayoutGuides;
@property(nonatomic) long long cursorPosition;
- (void)setPlaceholderText:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) NSString *shortPlaceholderText;
@property(retain, nonatomic) NSString *placeholderText;
@property(readonly, nonatomic) id <SCChatInputDrawerRenderable> currentDrawer;
@property(nonatomic) double drawerHeight;
@property(readonly, nonatomic) unsigned long long state;
@property(readonly, nonatomic) SCChatInputTextView *textView;
@property(readonly, nonatomic) SCChatInputBar *inputBar;
- (id)chatInputView;
@property(retain, nonatomic) UIView *topAccessoryView;
- (id)pageViewName;
- (void)viewDidLoad;
- (void)loadView;
- (void)_createCoordinator;
- (void)_registerNotifications;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

