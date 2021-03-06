//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, SCStoriesPostingConfiguration;

@interface SCPreviewSnapSenderDataModelBuilder : NSObject
{
    _Bool _fromPreview;
    _Bool _fromReplyCamera;
    _Bool _fromSendTo;
    NSArray *_blizzardEventsForSuccessfulSend;
    NSArray *_businessIds;
    NSArray *_recipientUsernames;
    NSArray *_appStories;
    NSString *_additionalText;
    NSString *_captureSessionId;
    SCStoriesPostingConfiguration *_storiesPostingConfig;
}

+ (id)previewSnapSenderDataModelFromExistingPreviewSnapSenderDataModel:(id)arg1;
+ (id)previewSnapSenderDataModel;
- (void).cxx_destruct;
- (id)withStoriesPostingConfig:(id)arg1;
- (id)withCaptureSessionId:(id)arg1;
- (id)withAdditionalText:(id)arg1;
- (id)withAppStories:(id)arg1;
- (id)withRecipientUsernames:(id)arg1;
- (id)withBusinessIds:(id)arg1;
- (id)withBlizzardEventsForSuccessfulSend:(id)arg1;
- (id)withFromSendTo:(_Bool)arg1;
- (id)withFromReplyCamera:(_Bool)arg1;
- (id)withFromPreview:(_Bool)arg1;
- (id)build;

@end

