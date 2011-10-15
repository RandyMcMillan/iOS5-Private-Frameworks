/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Weather/WeatherUpdater.h>

@class City;

@interface LocationUpdater : WeatherUpdater
{
    BOOL _isGeoCoding;
    City *currentCity;
}

+ (id)sharedLocationUpdater;
- (void)dealloc;
- (void)parsedResultCity:(id)arg1;
- (void)updateWeatherForLocation:(id)arg1 city:(id)arg2;
- (BOOL)isDataValid:(id)arg1;
- (void)failCity:(id)arg1;
- (void)_failed:(int)arg1;
@property(retain, nonatomic) City *currentCity; // @synthesize currentCity;

@end
