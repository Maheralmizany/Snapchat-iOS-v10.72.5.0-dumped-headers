//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCReportStoryDataParamsProvider.h"

@class NSData, NSDate, NSString;

@interface SCReportStoryDataParams : NSObject <SCReportStoryDataParamsProvider>
{
    _Bool _isVideo;
    _Bool _isCheetahStory;
    NSData *_snapData;
    NSData *_overlayData;
    NSString *_attachmentUrlString;
    NSString *_lensId;
    NSDate *_mediaSentTimestamp;
    NSString *_reportedUsername;
    NSString *_storyId;
    unsigned long long _storySnapSource;
}

@property(readonly, nonatomic) _Bool isCheetahStory; // @synthesize isCheetahStory=_isCheetahStory;
@property(readonly, nonatomic) unsigned long long storySnapSource; // @synthesize storySnapSource=_storySnapSource;
@property(readonly, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;
@property(readonly, nonatomic) NSString *reportedUsername; // @synthesize reportedUsername=_reportedUsername;
@property(readonly, nonatomic) NSDate *mediaSentTimestamp; // @synthesize mediaSentTimestamp=_mediaSentTimestamp;
@property(readonly, nonatomic) NSString *lensId; // @synthesize lensId=_lensId;
@property(readonly, nonatomic) NSString *attachmentUrlString; // @synthesize attachmentUrlString=_attachmentUrlString;
@property(readonly, nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(readonly, nonatomic) NSData *overlayData; // @synthesize overlayData=_overlayData;
@property(readonly, nonatomic) NSData *snapData; // @synthesize snapData=_snapData;
- (void).cxx_destruct;
- (id)paramDictionary;
- (id)initWithSnapData:(id)arg1 overlayData:(id)arg2 isVideo:(_Bool)arg3 attachmentUrlString:(id)arg4 lensId:(id)arg5 mediaSentTimestamp:(id)arg6 reportedUsername:(id)arg7 storyId:(id)arg8 storySnapSource:(unsigned long long)arg9 isCheetahStory:(_Bool)arg10;
- (id)storySnapId;
- (id)lensIdentifier;
- (void)storyDataParamsWithHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

