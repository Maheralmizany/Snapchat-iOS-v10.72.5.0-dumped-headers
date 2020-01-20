//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL;

@interface SCReportReasonNode : NSObject
{
    _Bool _shouldReportToServer;
    _Bool _isChildContextBased;
    NSString *_reasonId;
    NSString *_reason;
    NSString *_reportSubmitFeedbackId;
    NSURL *_reportingWebviewURL;
    NSArray *_children;
    NSString *_subtitleId;
}

+ (id)subtitleForSubtitleId:(id)arg1;
+ (id)lensInappropriateNode;
+ (id)copyrightInfringementNode;
+ (id)spamNode;
+ (id)threateningViolentOrConcerningParentNode;
+ (id)harassmentOrHateSpeechParentNode;
+ (id)nudityOrSextualContentNode;
@property(copy, nonatomic) NSString *subtitleId; // @synthesize subtitleId=_subtitleId;
@property(copy, nonatomic) NSArray *children; // @synthesize children=_children;
@property(readonly, nonatomic) _Bool isChildContextBased; // @synthesize isChildContextBased=_isChildContextBased;
@property(copy, nonatomic) NSURL *reportingWebviewURL; // @synthesize reportingWebviewURL=_reportingWebviewURL;
@property(copy, nonatomic) NSString *reportSubmitFeedbackId; // @synthesize reportSubmitFeedbackId=_reportSubmitFeedbackId;
@property(nonatomic) _Bool shouldReportToServer; // @synthesize shouldReportToServer=_shouldReportToServer;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *reasonId; // @synthesize reasonId=_reasonId;
- (void).cxx_destruct;
- (id)subtitle:(id)arg1;
- (id)subtitle;
- (id)childrenList;
- (id)childAt:(unsigned long long)arg1;
- (_Bool)isFinal;
- (id)initWithReasonId:(id)arg1 reason:(id)arg2 subtitle:(id)arg3 shouldSend:(_Bool)arg4 feedbackId:(id)arg5 reportingWebviewURL:(id)arg6 isChildContextBased:(_Bool)arg7 children:(id)arg8;
- (id)initWithReasonId:(id)arg1 reason:(id)arg2 reportingWebviewURL:(id)arg3;
- (id)initWithReasonId:(id)arg1 shouldSend:(_Bool)arg2 feedbackId:(id)arg3;
- (id)initWithReasonId:(id)arg1 reason:(id)arg2 shouldSend:(_Bool)arg3 feedbackId:(id)arg4;
- (id)initWithReasonId:(id)arg1 reason:(id)arg2 subtitle:(id)arg3 children:(id)arg4;
- (id)initWithReasonId:(id)arg1 reason:(id)arg2 subtitle:(id)arg3 isChildContextBased:(_Bool)arg4 children:(id)arg5;

@end

