//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, SCSnapchatter;

@interface SCCreatorSettingsSubscriptionEntityId : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCSnapchatter *_snapchatter_snapchatter;
    long long _publisher_publisherId;
    NSString *_publisher_displayName;
}

+ (id)snapchatterWithSnapchatter:(id)arg1;
+ (id)publisherWithPublisherId:(long long)arg1 displayName:(id)arg2;
- (void).cxx_destruct;
- (void)matchSnapchatter:(CDUnknownBlockType)arg1 publisher:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
