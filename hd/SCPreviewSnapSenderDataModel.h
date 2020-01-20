//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString, SCStoriesPostingConfiguration;

@interface SCPreviewSnapSenderDataModel : NSObject <NSCopying>
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

@property(readonly, copy, nonatomic) SCStoriesPostingConfiguration *storiesPostingConfig; // @synthesize storiesPostingConfig=_storiesPostingConfig;
@property(readonly, copy, nonatomic) NSString *captureSessionId; // @synthesize captureSessionId=_captureSessionId;
@property(readonly, copy, nonatomic) NSString *additionalText; // @synthesize additionalText=_additionalText;
@property(readonly, copy, nonatomic) NSArray *appStories; // @synthesize appStories=_appStories;
@property(readonly, copy, nonatomic) NSArray *recipientUsernames; // @synthesize recipientUsernames=_recipientUsernames;
@property(readonly, copy, nonatomic) NSArray *businessIds; // @synthesize businessIds=_businessIds;
@property(readonly, copy, nonatomic) NSArray *blizzardEventsForSuccessfulSend; // @synthesize blizzardEventsForSuccessfulSend=_blizzardEventsForSuccessfulSend;
@property(readonly, nonatomic) _Bool fromSendTo; // @synthesize fromSendTo=_fromSendTo;
@property(readonly, nonatomic) _Bool fromReplyCamera; // @synthesize fromReplyCamera=_fromReplyCamera;
@property(readonly, nonatomic) _Bool fromPreview; // @synthesize fromPreview=_fromPreview;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFromPreview:(_Bool)arg1 fromReplyCamera:(_Bool)arg2 fromSendTo:(_Bool)arg3 blizzardEventsForSuccessfulSend:(id)arg4 businessIds:(id)arg5 recipientUsernames:(id)arg6 appStories:(id)arg7 additionalText:(id)arg8 captureSessionId:(id)arg9 storiesPostingConfig:(id)arg10;

@end

