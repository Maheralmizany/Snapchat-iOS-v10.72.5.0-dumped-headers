//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSnapAirShakeTicketAdapter.h"

@class SCUserSession;

@interface SCS2RBaseAdapter : NSObject <SCSnapAirShakeTicketAdapter>
{
    SCUserSession *_userSession;
}

+ (id)sharedAdapter;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;

@end

