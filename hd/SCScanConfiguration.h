//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCUserSession;

@interface SCScanConfiguration : NSObject
{
    CDUnknownBlockType _scanResultsHandler;
    SCUserSession *_userSession;
}

@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(copy, nonatomic) CDUnknownBlockType scanResultsHandler; // @synthesize scanResultsHandler=_scanResultsHandler;
- (void).cxx_destruct;

@end

