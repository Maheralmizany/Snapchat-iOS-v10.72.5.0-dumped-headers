//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, SCScanFromLensResponse;

@interface SCScanFromLensNetworkUpdate : NSObject <NSCopying>
{
    SCScanFromLensResponse *_response;
    NSString *_requestId;
}

@property(readonly, copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(readonly, copy, nonatomic) SCScanFromLensResponse *response; // @synthesize response=_response;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResponse:(id)arg1 requestId:(id)arg2;

@end

