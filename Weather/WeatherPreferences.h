/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSURLConnectionDelegate-Protocol.h"

@class NSArray, NSMutableData, NSString, NSURLConnection;

@interface WeatherPreferences : NSObject <NSURLConnectionDelegate>
{
    BOOL _isCelsius;
    NSString *_UUID;
    NSString *_serviceHost;
    NSString *_secondaryServiceHost;
    NSURLConnection *_gtButtonLogoConnection;
    NSMutableData *_gtButtonLogoData;
    NSURLConnection *_gtBacksideLogoConnection;
    NSMutableData *_gtBacksideLogoData;
    BOOL _serviceDebugging;
    NSArray *_lastUbiquitousWrittenDefaults;
    id <ServiceLogoControllerDelegate> _serviceLogoDelegate;
    id <SynchronizedDefaultsDelegate> _syncDelegate;
    NSString *twcURLString;
}

+ (id)sharedPreferences;
+ (id)serviceDebuggingPath;
- (void)registerDefaultPreferences;
@property(nonatomic) id <SynchronizedDefaultsDelegate> syncDelegate; // @synthesize syncDelegate=_syncDelegate;
- (void)dealloc;
- (BOOL)loadUnits;
- (void)setCelsius:(BOOL)arg1;
- (BOOL)isCelsius;
- (id)_getWoeidFromLocationID:(id)arg1;
- (BOOL)_defaultsAreValid;
- (BOOL)_arePrefsNotCurrent;
- (void)loadFromDisk;
- (id)preferencesDictionaryForCity:(id)arg1;
- (id)cityFromPreferencesDictionary:(id)arg1;
- (id)localWeatherCity;
- (void)saveToDiskWithLocalWeatherCity:(id)arg1;
- (void)saveToDiskWithCities:(id)arg1;
- (void)saveToDiskWithCities:(id)arg1 activeCity:(int)arg2;
- (id)_ppt_addFakeTestCities;
- (id)_defaultCities;
- (id)loadSavedCities;
- (int)loadActiveCity;
- (void)setActiveCity:(int)arg1;
- (void)synchronizeStateToDisk;
- (id)UUID;
- (id)serviceHost;
- (id)secondaryServiceHost;
- (id)logoURL;
- (id)secondaryServiceLogoURL;
- (id)_cacheDirectoryPath;
- (id)logoButtonImage;
- (id)logoBacksideImage;
- (void)writeDefaultValue:(id)arg1 forKey:(id)arg2;
- (id)readDefaultValueForKey:(id)arg1;
- (id)secondaryServiceBacksideImage;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)setLocalWeatherEnabled:(BOOL)arg1;
- (BOOL)isLocalWeatherEnabled;
- (BOOL)serviceDebugging;
- (id)_cityArrayToCloudCityArray:(id)arg1;
- (BOOL)_areDefaultCities:(id)arg1;
- (void)_syncToCloudIfNotDefaultCities:(id)arg1;
- (void)_synchronizedDefaultsDidChange:(id)arg1;
- (void)_setLastUbiquitousWrittenDefaults:(id)arg1 isCloudCityArray:(BOOL)arg2;
- (void)_saveUbiquitousDefaults:(id)arg1;
- (id)combineCloudCities:(id)arg1 withExisting:(id)arg2 byAppending:(BOOL)arg3;
- (void)saveToUbiquitousStore;
- (void)resetLocale;
@property(copy, nonatomic) NSString *twcURLString; // @synthesize twcURLString;
@property(nonatomic) id <ServiceLogoControllerDelegate> serviceLogoDelegate; // @synthesize serviceLogoDelegate=_serviceLogoDelegate;

@end
