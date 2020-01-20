//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "SCStreamingResourceURLProvider.h"

@class NSString, NSURL;

@interface SCStreamingResourceInfo : NSObject <NSCopying, SCStreamingResourceURLProvider>
{
    NSURL *_url;
    NSString *_resourceId;
    NSString *_key;
    NSString *_iv;
}

@property(readonly, copy, nonatomic) NSString *iv; // @synthesize iv=_iv;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, copy, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (_Bool)isEncrypted;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUrl:(id)arg1 resourceId:(id)arg2 key:(id)arg3 iv:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

