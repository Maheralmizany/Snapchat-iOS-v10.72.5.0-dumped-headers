//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCCognacWVJBRequestOperation.h"

@class NSString, SCCognacServiceClient;

@interface SCCognacSubmitLeaderboardScoreOperation : SCCognacWVJBRequestOperation
{
    SCCognacServiceClient *_cognacServiceClient;
    NSString *_appId;
}

@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) SCCognacServiceClient *cognacServiceClient; // @synthesize cognacServiceClient=_cognacServiceClient;
- (void).cxx_destruct;
- (void)run;

@end

