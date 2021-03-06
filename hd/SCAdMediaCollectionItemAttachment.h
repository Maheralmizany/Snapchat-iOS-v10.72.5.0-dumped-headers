//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class SCAdMediaDeepLink, SCAdMediaWebviewAttachment;

@interface SCAdMediaCollectionItemAttachment : NSObject <NSCopying, NSCoding>
{
    SCAdMediaDeepLink *_deepLink;
    SCAdMediaWebviewAttachment *_webviewAttachment;
    long long _adType;
}

@property(readonly, nonatomic) long long adType; // @synthesize adType=_adType;
@property(readonly, copy, nonatomic) SCAdMediaWebviewAttachment *webviewAttachment; // @synthesize webviewAttachment=_webviewAttachment;
@property(readonly, copy, nonatomic) SCAdMediaDeepLink *deepLink; // @synthesize deepLink=_deepLink;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDeepLink:(id)arg1 webviewAttachment:(id)arg2 adType:(long long)arg3;
- (id)initWithCoder:(id)arg1;

@end

