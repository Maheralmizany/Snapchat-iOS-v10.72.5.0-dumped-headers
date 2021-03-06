//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString, SCOptInEntityId;

@interface SCOptInEntity : NSObject <NSCopying, NSCoding>
{
    SCOptInEntityId *_entityId;
    NSString *_displayName;
    unsigned long long _optInState;
}

@property(readonly, nonatomic) unsigned long long optInState; // @synthesize optInState=_optInState;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) SCOptInEntityId *entityId; // @synthesize entityId=_entityId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEntityId:(id)arg1 displayName:(id)arg2 optInState:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;

@end

