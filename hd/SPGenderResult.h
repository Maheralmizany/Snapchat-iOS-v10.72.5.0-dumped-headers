//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface SPGenderResult : NSObject <NSCoding>
{
    double _girlProbability;
    unsigned long long _type;
    NSString *_version;
}

@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) double girlProbability; // @synthesize girlProbability=_girlProbability;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *textDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithGirlProbability:(double)arg1;
- (id)initWithType:(unsigned long long)arg1;

@end

