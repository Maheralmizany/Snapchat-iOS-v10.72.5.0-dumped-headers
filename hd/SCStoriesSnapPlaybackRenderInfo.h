//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, SCStoriesSnapPlaybackFramingInfo;

@interface SCStoriesSnapPlaybackRenderInfo : NSObject <NSCopying>
{
    NSString *_attachmentUrl;
    SCStoriesSnapPlaybackFramingInfo *_framing;
    NSString *_captionText;
}

@property(readonly, copy, nonatomic) NSString *captionText; // @synthesize captionText=_captionText;
@property(readonly, copy, nonatomic) SCStoriesSnapPlaybackFramingInfo *framing; // @synthesize framing=_framing;
@property(readonly, copy, nonatomic) NSString *attachmentUrl; // @synthesize attachmentUrl=_attachmentUrl;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAttachmentUrl:(id)arg1 framing:(id)arg2 captionText:(id)arg3;

@end
