//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLazy;

@interface SCStoriesNetworkingServices : NSObject
{
    SCLazy *_mixerNetworkRequester;
    SCLazy *_fsnNetworkRequester;
}

@property(readonly, nonatomic) SCLazy *fsnNetworkRequester; // @synthesize fsnNetworkRequester=_fsnNetworkRequester;
@property(readonly, nonatomic) SCLazy *mixerNetworkRequester; // @synthesize mixerNetworkRequester=_mixerNetworkRequester;
- (void).cxx_destruct;
- (id)initWithMixerNetworkRequester:(id)arg1 fsnNetworkRequester:(id)arg2;

@end
