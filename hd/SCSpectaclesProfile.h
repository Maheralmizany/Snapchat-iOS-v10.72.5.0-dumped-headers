//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCSpectaclesProfile : NSObject
{
    NSString *_userId;
    NSString *_username;
    NSString *_lagunaId;
    NSString *_authToken;
}

@property(readonly, copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(readonly, copy, nonatomic) NSString *lagunaId; // @synthesize lagunaId=_lagunaId;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)initWithUserId:(id)arg1 username:(id)arg2 lagunaId:(id)arg3 authToken:(id)arg4;

@end

