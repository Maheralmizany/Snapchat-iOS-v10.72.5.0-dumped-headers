//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCReportStateManager.h"

@class NSString, SCReportReasonNode;

@interface SCReportStoryStateManager : SCReportStateManager
{
    NSString *_attachmentUrl;
    NSString *_lensId;
}

- (void).cxx_destruct;
- (id)determineMoreReasonsNode;
- (id)constructNode;
- (id)initWithAttachmentUrl:(id)arg1 lensId:(id)arg2;

// Remaining properties
@property(retain, nonatomic) SCReportReasonNode *currentNode; // @dynamic currentNode;

@end

