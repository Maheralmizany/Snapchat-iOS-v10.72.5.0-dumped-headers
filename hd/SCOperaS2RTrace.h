//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCOperaS2RTrace : NSObject <NSCopying>
{
    NSString *_mediaID;
    NSString *_pageID;
    NSString *_sessionID;
    NSString *_clientID;
    NSString *_mediaType;
    NSString *_itemType;
    NSString *_viewSource;
}

@property(readonly, copy, nonatomic) NSString *viewSource; // @synthesize viewSource=_viewSource;
@property(readonly, copy, nonatomic) NSString *itemType; // @synthesize itemType=_itemType;
@property(readonly, copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(readonly, copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, copy, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
@property(readonly, copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMediaID:(id)arg1 pageID:(id)arg2 sessionID:(id)arg3 clientID:(id)arg4 mediaType:(id)arg5 itemType:(id)arg6 viewSource:(id)arg7;

@end

