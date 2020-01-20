//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCGroupInviteVenueModel : NSObject
{
    NSString *_displayName;
    NSString *_address;
    NSString *_venueId;
    struct CLLocationCoordinate2D _coordinate;
}

@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, copy, nonatomic) NSString *venueId; // @synthesize venueId=_venueId;
@property(readonly, copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (id)initWithDisplayName:(id)arg1 address:(id)arg2 coordinate:(struct CLLocationCoordinate2D)arg3 venueId:(id)arg4;

@end

