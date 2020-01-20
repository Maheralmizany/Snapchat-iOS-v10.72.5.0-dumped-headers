//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCNGrpcAuthContext : NSObject
{
    NSString *_token;
    NSString *_attestationPayload;
}

+ (id)AuthContextWithToken:(id)arg1 attestationPayload:(id)arg2;
@property(readonly, nonatomic) NSString *attestationPayload; // @synthesize attestationPayload=_attestationPayload;
@property(readonly, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (id)description;
- (id)initWithToken:(id)arg1 attestationPayload:(id)arg2;

@end
