//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCAutofillSuggestion.h"
#import "WKScriptMessageHandler.h"

@class NSMutableArray, NSString, SCOperaRemoteWebAutofillSuggestionBar, SCOperaUserInfoProvider, SCOperaWebView, SCPromptView, WKUserContentController;

@interface SCOperaRemoteWebJavascriptBridge : NSObject <WKScriptMessageHandler, SCAutofillSuggestion>
{
    SCPromptView *_promptView;
    CDUnknownBlockType _promptVisibilityDidChangeCallback;
    NSMutableArray *_actionCallBacks;
    _Bool _allowAutoDetectAutofill;
    _Bool _allowAutoDetectZipCodeAutofill;
    _Bool _allowOnEditAutofill;
    _Bool _keyboardAlreadyShown;
    SCOperaRemoteWebAutofillSuggestionBar *_autofillSuggestionBar;
    NSString *_interactingElementId;
    NSString *_autofillKey;
    NSString *_autofillValue;
    NSString *_autofillContactJS;
    double _autofillBarTopOffset;
    double _keyboardHeight;
    double _autofillBarHeight;
    double _screenTopPadding;
    double _screenBottomPadding;
    double _keyboardAnimationDuration;
    unsigned long long _keyboardAnimationOptions;
    SCOperaUserInfoProvider *_userInfoProvider;
    WKUserContentController *_userContentController;
    SCOperaWebView *_webView;
    unsigned long long _promptCount;
    unsigned long long _promptAllowedCount;
    NSString *_webpageAutofillDetectedFields;
    NSString *_webpageDetectedFields;
    NSMutableArray *_webpageOnEditAutofilledFields;
}

@property(retain, nonatomic) NSMutableArray *webpageOnEditAutofilledFields; // @synthesize webpageOnEditAutofilledFields=_webpageOnEditAutofilledFields;
@property(retain, nonatomic) NSString *webpageDetectedFields; // @synthesize webpageDetectedFields=_webpageDetectedFields;
@property(retain, nonatomic) NSString *webpageAutofillDetectedFields; // @synthesize webpageAutofillDetectedFields=_webpageAutofillDetectedFields;
@property(nonatomic) unsigned long long promptAllowedCount; // @synthesize promptAllowedCount=_promptAllowedCount;
@property(nonatomic) unsigned long long promptCount; // @synthesize promptCount=_promptCount;
@property(retain, nonatomic) SCOperaWebView *webView; // @synthesize webView=_webView;
@property(readonly, nonatomic) WKUserContentController *userContentController; // @synthesize userContentController=_userContentController;
@property(retain, nonatomic) SCOperaUserInfoProvider *userInfoProvider; // @synthesize userInfoProvider=_userInfoProvider;
- (void).cxx_destruct;
- (id)convertAutoFillFieldTypeKeyToLocalizedName:(id)arg1;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)_keyboardDidShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)dismissKeyboard;
- (void)dismissOnEditAutofillSuggestionBar;
- (void)autofillSuggestionTapped;
- (void)doneLabelTapped;
- (void)autofillContactButtonPressed;
- (void)handleOnEditZipCodeAutofillForElementId:(id)arg1;
- (void)handleOnEditAutofillWithKey:(id)arg1 autofillValue:(id)arg2 elementId:(id)arg3;
- (void)resetAutofillMetrics;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addActionCallback:(CDUnknownBlockType)arg1;
- (void)promptVisibilityDidChangeCallback:(CDUnknownBlockType)arg1;
- (void)updatePromptForHeader:(double)arg1;
- (void)setNeedsLayout;
- (void)didStartUrlLoad;
- (id)generateOnEditAutofillJsStringWithSelectorPrefix:(id)arg1 valueToFill:(id)arg2;
- (id)generateAutoFillFieldFillJsString:(id)arg1 valueToFill:(id)arg2;
- (id)generateAutoFillFieldSearchJsString:(id)arg1 skipInvisibleElement:(_Bool)arg2 resultVariableName:(id)arg3;
- (id)generateAutoFillPlaceholderTextSearchJsString:(id)arg1;
- (id)generateAutofillFields:(id)arg1;
- (void)launchPromptWithAutofillFields:(id)arg1 autofillActionJsStringToEvaluate:(id)arg2 cancelActionJsStringToEvaluate:(id)arg3;
- (void)launchPromptForDefaultAutofill:(id)arg1;
- (void)searchAutoFillFieldsSkipInvisibleFields:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)autoDetectAutofillAndLaunchPromptIfNecessary;
- (void)setUpOnEditAutofill;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)initWithUserInfoProvider:(id)arg1 allowAutoDetectAutofill:(_Bool)arg2 allowAutoDetectZipCodeAutofill:(_Bool)arg3 allowOnEditAutofill:(_Bool)arg4 reportJavaScriptPerformance:(_Bool)arg5 googleAnalyticsHitURLRegex:(id)arg6;
- (id)initWithUserInfoProvider:(id)arg1 allowAutoDetectAutofill:(_Bool)arg2 allowAutoDetectZipCodeAutofill:(_Bool)arg3 allowOnEditAutofill:(_Bool)arg4 reportJavaScriptPerformance:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
