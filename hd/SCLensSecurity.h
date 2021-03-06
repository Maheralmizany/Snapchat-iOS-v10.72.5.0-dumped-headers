//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCTraceEnabled.h"

@class NSString;

@interface SCLensSecurity : NSObject <SCTraceEnabled>
{
    id <SCPerforming> _performer;
    id <SCLensSynchronousSecurity> _lensSecurity;
}

- (void).cxx_destruct;
- (_Bool)isAllowedToRequestContentWithUrlString:(id)arg1 signature:(id)arg2;
- (void)verifyContentAtPathValid:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)verifyResource:(id)arg1 withData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)verifyResource:(id)arg1 withContentPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithLensSecurity:(id)arg1;
- (id)initWithUserPreferences:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

