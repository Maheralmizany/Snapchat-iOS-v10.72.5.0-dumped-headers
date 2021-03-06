//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCVenuesContainer.h"

@class NSArray, NSDictionary, NSString;

@interface SCVenuesContainer : NSObject <SCVenuesContainer>
{
    NSDictionary *_contextMap;
    NSArray *_suggestedVenues;
    NSArray *_extraVenues;
    NSArray *_localityVenues;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)venuesWithType:(unsigned long long)arg1 context:(unsigned long long)arg2;
- (id)initWithSuggestedVenues:(id)arg1 extraVenues:(id)arg2 localityVenues:(id)arg3 suggestedVenuesContext:(id)arg4 extraVenuesContext:(id)arg5 localityVenuesContext:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

