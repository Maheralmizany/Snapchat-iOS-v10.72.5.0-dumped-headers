//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSString;

@interface SCInviteClientAPIResponse : SCComposerMarshallableObject
{
    NSString *_payload;
    NSString *_payloadType;
}

@property(copy, nonatomic) NSString *payloadType; // @synthesize payloadType=_payloadType;
@property(copy, nonatomic) NSString *payload; // @synthesize payload=_payload;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithPayload:(id)arg1 payloadType:(id)arg2;

@end
