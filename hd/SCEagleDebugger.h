//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDate, NSMutableDictionary, SCEagleSearchResult, UIButton, UIImageView, UIScrollView, UITextView, UIView;

@interface SCEagleDebugger : NSObject
{
    UIView *_debugView;
    UIImageView *_debugImageView;
    UITextView *_debugTextView;
    UIButton *_hideButton;
    NSDate *_searchStartDate;
    UIScrollView *_scrollView;
    double _scrollViewY;
    NSMutableDictionary *_logData;
    NSData *_lastSearchImageData;
    NSDate *_lastSearchImageDataTimestamp;
    SCEagleSearchResult *_lastSearchResult;
}

+ (id)shared;
@property(readonly, copy, nonatomic) SCEagleSearchResult *lastSearchResult; // @synthesize lastSearchResult=_lastSearchResult;
@property(readonly, copy, nonatomic) NSDate *lastSearchImageDataTimestamp; // @synthesize lastSearchImageDataTimestamp=_lastSearchImageDataTimestamp;
@property(readonly, copy, nonatomic) NSData *lastSearchImageData; // @synthesize lastSearchImageData=_lastSearchImageData;
- (void).cxx_destruct;
- (id)jiraMetaInfo;
- (id)jiraMetaInfoWithResult:(id)arg1;
- (void)_closeDebugTextView:(id)arg1;
- (void)_closeDebugImageView;
- (void)_didTapViewLog:(id)arg1;
- (void)_didTapDebugImage:(id)arg1;
- (void)_hide;
- (void)show;
- (void)_setupDebugView;
- (void)_addViewToScrollView:(id)arg1;
- (void)_logLongText:(id)arg1;
- (void)_logImage:(id)arg1;
- (void)_logText:(id)arg1;
- (void)_logEventForS2R:(long long)arg1 extraData:(id)arg2;
- (void)_logEventForDebugView:(long long)arg1 extraData:(id)arg2;
- (void)logEvent:(long long)arg1 extraData:(id)arg2;
- (void)logEvent:(long long)arg1;

@end

