//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSString, SCImpalaServiceConfigValue;

@interface SCImpalaPublicProfileServiceConfig : SCComposerMarshallableObject
{
    NSString *_accountServiceBaseUrl;
    NSString *_storyServiceBaseUrl;
    NSString *_lensServiceBaseUrl;
    SCImpalaServiceConfigValue *_discoverFeedService;
}

@property(retain, nonatomic) SCImpalaServiceConfigValue *discoverFeedService; // @synthesize discoverFeedService=_discoverFeedService;
@property(copy, nonatomic) NSString *lensServiceBaseUrl; // @synthesize lensServiceBaseUrl=_lensServiceBaseUrl;
@property(copy, nonatomic) NSString *storyServiceBaseUrl; // @synthesize storyServiceBaseUrl=_storyServiceBaseUrl;
@property(copy, nonatomic) NSString *accountServiceBaseUrl; // @synthesize accountServiceBaseUrl=_accountServiceBaseUrl;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithAccountServiceBaseUrl:(id)arg1 storyServiceBaseUrl:(id)arg2 lensServiceBaseUrl:(id)arg3;
- (id)initWithAccountServiceBaseUrl:(id)arg1 storyServiceBaseUrl:(id)arg2 lensServiceBaseUrl:(id)arg3 discoverFeedService:(id)arg4;

@end

