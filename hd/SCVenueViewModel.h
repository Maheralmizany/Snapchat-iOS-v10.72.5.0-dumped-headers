//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSString;

@interface SCVenueViewModel : SCComposerMarshallableObject
{
    NSString *_venueId;
    NSString *_venueName;
}

@property(copy, nonatomic) NSString *venueName; // @synthesize venueName=_venueName;
@property(copy, nonatomic) NSString *venueId; // @synthesize venueId=_venueId;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithVenueId:(id)arg1 venueName:(id)arg2;

@end

