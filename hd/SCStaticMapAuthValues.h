//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate, NSString;

@interface SCStaticMapAuthValues : NSObject <NSCoding>
{
    NSDate *_date;
    NSString *_accessToken;
    NSString *_mapboxUsername;
    NSString *_mapboxStyleId;
}

@property(copy, nonatomic) NSString *mapboxStyleId; // @synthesize mapboxStyleId=_mapboxStyleId;
@property(copy, nonatomic) NSString *mapboxUsername; // @synthesize mapboxUsername=_mapboxUsername;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
