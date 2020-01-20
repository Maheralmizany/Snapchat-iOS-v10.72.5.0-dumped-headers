//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, NSURL;

@interface SCChatURLMediaCardViewModel : NSObject <NSCopying>
{
    NSString *_urlThumbnailImageCacheId;
    NSString *_trackingId;
    NSURL *_url;
}

@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *trackingId; // @synthesize trackingId=_trackingId;
@property(readonly, copy, nonatomic) NSString *urlThumbnailImageCacheId; // @synthesize urlThumbnailImageCacheId=_urlThumbnailImageCacheId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUrlThumbnailImageCacheId:(id)arg1 trackingId:(id)arg2 url:(id)arg3;

@end

