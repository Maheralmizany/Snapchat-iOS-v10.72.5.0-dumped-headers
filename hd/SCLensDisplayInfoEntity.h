//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface SCLensDisplayInfoEntity : NSObject
{
    NSString *_name;
    NSString *_unit;
    NSNumber *_value;
    unsigned long long _position;
}

+ (id)entitiesOrder;
+ (id)sizeDisplayInfoEntityWithValue:(id)arg1;
+ (id)ramDisplayInfoEntityWithValue:(id)arg1;
+ (id)fpsDisplayInfoEntityWithValue:(id)arg1;
@property(readonly, nonatomic) unsigned long long position; // @synthesize position=_position;
@property(readonly, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *unit; // @synthesize unit=_unit;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *formattedValue;
- (id)description;
- (id)initWithName:(id)arg1 value:(id)arg2 position:(unsigned long long)arg3;

@end

