//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCLensUriServiceProviderRoute : NSObject
{
    NSString *_route;
    id <SCLensUriServiceProviderRouteHandler> _handler;
}

@property(readonly, nonatomic) id <SCLensUriServiceProviderRouteHandler> handler; // @synthesize handler=_handler;
@property(readonly, copy, nonatomic) NSString *route; // @synthesize route=_route;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithRoute:(id)arg1 handler:(id)arg2;

@end
